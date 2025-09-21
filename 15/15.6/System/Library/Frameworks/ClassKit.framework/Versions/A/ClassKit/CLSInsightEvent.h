@class NSMutableDictionary;

@interface CLSInsightEvent : CLSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic) long long type;

+ (char)supportsSecureCoding;
+ (id)supportedInfoDictionaryClasses;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithType:(long long)a0;
- (char)validateObject:(id *)a0;
- (id)_infoDictDescription;
- (void)mergeWithObject:(id)a0;

@end
