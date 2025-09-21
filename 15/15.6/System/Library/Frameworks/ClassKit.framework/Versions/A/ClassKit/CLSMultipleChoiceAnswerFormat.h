@class NSString, NSArray;

@interface CLSMultipleChoiceAnswerFormat : CLSAnswerFormat <CLSRelationable> {
    long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *answerChoiceItems;

+ (char)supportsSecureCoding;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setType:(long long)a0;
- (id)_init;
- (id)initWithType:(long long)a0;
- (char)validateObject:(id *)a0;
- (void)addAnswerItem:(id)a0;
- (char)answerChoiceArraysEqual:(id)a0;
- (void)removeAnswerItem:(id)a0;

@end
