@class NSString, NSDictionary, NSSet, PKPassFieldImage;

@interface PKPassField : NSObject <NSSecureCoding, NSCopying> {
    NSString *_value;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) PKPassFieldImage *labelImage;
@property (readonly, weak) NSString *value;
@property (retain, nonatomic) PKPassFieldImage *valueImage;
@property (copy, nonatomic) id unformattedValue;
@property (retain, nonatomic) PKPassFieldImage *accessoryImage;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) unsigned long long row;
@property (copy, nonatomic) NSString *changeMessage;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (copy, nonatomic) NSDictionary *semantics;
@property (nonatomic) double amount;
@property (nonatomic) double threshold;
@property (nonatomic) long long cellStyle;
@property (nonatomic) long long foreignReferenceType;
@property (copy, nonatomic) NSSet *foreignReferenceIdentifiers;
@property (nonatomic) long long unitType;
@property (readonly, nonatomic) char isDrillInField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asDictionary;
- (id)asMutableDictionary;
- (void)flushCachedValue;

@end
