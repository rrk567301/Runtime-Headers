@class NSMutableDictionary;

@interface CLSInsightEvent : CLSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;
+ (id)supportedInfoDictionaryClasses;

- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)dictionaryRepresentation;
- (BOOL)validateObject:(id *)a0;
- (id)_infoDictDescription;
- (void)mergeWithObject:(id)a0;

@end
