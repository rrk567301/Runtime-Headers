@class NSString, NSDictionary, NSSet;

@interface PKPassField : NSObject <NSSecureCoding, NSCopying> {
    NSString *_value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *label;
@property (readonly, weak) NSString *value;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) unsigned long long row;
@property (copy, nonatomic) id unformattedValue;
@property (copy, nonatomic) NSString *changeMessage;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (copy, nonatomic) NSDictionary *semantics;
@property (nonatomic) long long cellStyle;
@property (nonatomic) long long foreignReferenceType;
@property (copy, nonatomic) NSSet *foreignReferenceIdentifiers;
@property (nonatomic) long long unitType;
@property (readonly, nonatomic) BOOL isDrillInField;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asDictionary;
- (void)flushCachedValue;
- (id)asMutableDictionary;

@end
