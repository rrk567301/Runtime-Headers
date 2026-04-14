@class NSSet, NSUUID;

@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *parameters;
@property (retain, nonatomic) NSUUID *uuid;

- (id)initWithParameters:(id)a0 uuid:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOpaqueParameters;
- (BOOL)isEqualToSlotSet:(id)a0;
- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithOpaqueParametersUuid:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
