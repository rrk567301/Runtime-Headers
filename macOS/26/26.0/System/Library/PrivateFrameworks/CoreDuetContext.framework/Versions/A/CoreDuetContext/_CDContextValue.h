@class NSSet, NSMutableDictionary, NSDate, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface _CDContextValue : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, retain, nonatomic) NSSet *supportedContextValueClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (retain, nonatomic) NSObject<NSCopying, NSSecureCoding> *value;
@property (retain, nonatomic) NSDate *lastModifiedDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
