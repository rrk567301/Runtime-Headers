@class NSMutableDictionary;

@interface CLSInsightEvent : CLSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;
+ (id)supportedInfoDictionaryClasses;

- (id)initWithType:(long long)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)_infoDictDescription;
- (void)mergeWithObject:(id)a0;

@end
