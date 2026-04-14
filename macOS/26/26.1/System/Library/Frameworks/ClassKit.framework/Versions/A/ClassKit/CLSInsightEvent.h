@class NSMutableDictionary;

@interface CLSInsightEvent : CLSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;
+ (id)supportedInfoDictionaryClasses;

- (id)dictionaryRepresentation;
- (id)initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)validateObject:(id *)a0;
- (id)_infoDictDescription;
- (void)mergeWithObject:(id)a0;

@end
