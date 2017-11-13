/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLServiceRegistryEndpoint.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Cloud Service Registry API (serviceregistry/alpha)
// Description:
//   Manages service endpoints in Service Registry and provides integration with
//   DNS for service discovery and name resolution.
// Documentation:
//   https://cloud.google.com/service-registry/
// Classes:
//   GTLServiceRegistryEndpoint (0 custom class methods, 10 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLServiceRegistryEndpointEndpointVisibility;

// ----------------------------------------------------------------------------
//
//   GTLServiceRegistryEndpoint
//

// Next available tag: 13

@interface GTLServiceRegistryEndpoint : GTLObject

// A user-provided address of the service represented by this endpoint. This can
// be an IPv4 or IPv6 address, or a hostname.
@property (nonatomic, copy) NSString *address;

// [Output Only] Creation timestamp in RFC3339 text format.
@property (nonatomic, copy) NSString *creationTimestamp;

// An optional user-provided description of the endpoint.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (nonatomic, copy) NSString *descriptionProperty;

// Supply the fingerprint value for update requests. The fingerprint value is
// generated by the server and ensures optimistic concurrency (so that only one
// update can be performed at a time). The fingerprint changes after each
// update.
@property (nonatomic, copy) NSString *fingerprint;  // GTLBase64 can encode/decode (probably web-safe format)

// [Output Only] Unique identifier for the resource; defined by the server.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, retain) NSNumber *identifier;  // unsignedLongLongValue

// A user-provided name of the endpoint, which must be unique within the
// project. The name must comply with RFC1035. Specifically, the name must be
// 1-63 characters long and match the regular expression
// [a-z]([-a-z0-9]*[a-z0-9])? which means the first character must be a
// lowercase letter, and all following characters must be a dash, lowercase
// letter, or digit, except the last character, which cannot be a dash.
@property (nonatomic, copy) NSString *name;

// An optional user-provided port of the service represented by this endpoint.
@property (nonatomic, retain) NSNumber *port;  // intValue

// [Output Only] Self link for the endpoint.
@property (nonatomic, copy) NSString *selfLink;

// [Output Only] The current state of the endpoint, as determined by the system.
@property (nonatomic, copy) NSString *state;

// The DNS Integration configuration for this endpoint. This must be a list of
// fully-qualified URLs to Compute Engine networks.
@property (nonatomic, retain) GTLServiceRegistryEndpointEndpointVisibility *visibility;

@end
