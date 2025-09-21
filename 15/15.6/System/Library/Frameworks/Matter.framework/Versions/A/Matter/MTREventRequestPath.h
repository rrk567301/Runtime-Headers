@class NSNumber;

@interface MTREventRequestPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *endpoint;
@property (readonly, copy, nonatomic) NSNumber *cluster;
@property (readonly, copy, nonatomic) NSNumber *event;

+ (id)requestPathWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)convertToEventPathParams:(struct EventPathParams { unsigned int x0; unsigned int x1; unsigned short x2; BOOL x3; } *)a0;
- (id)initWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2;
- (char)isEqualToEventRequestPath:(id)a0;

@end
