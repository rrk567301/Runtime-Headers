@class NSNumber, NSArray;

@interface MTREndpointInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned short _endpointID;
    unsigned char _mark;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *endpointID;
@property (readonly, copy, nonatomic) NSArray *deviceTypes;
@property (readonly, copy, nonatomic) NSArray *partsList;
@property (readonly, copy, nonatomic) NSArray *children;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
