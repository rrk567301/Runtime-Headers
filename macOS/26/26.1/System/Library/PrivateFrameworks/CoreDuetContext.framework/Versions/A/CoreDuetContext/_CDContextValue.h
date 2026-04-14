@class NSSet, NSMutableDictionary, NSDate, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, retain, nonatomic) NSSet *supportedContextValueClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (retain, nonatomic) NSObject<NSCopying, NSSecureCoding> *value;
@property (retain, nonatomic) NSDate *lastModifiedDate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
