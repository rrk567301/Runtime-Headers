@class NSString, NSMutableArray, NSData;

@interface TRIPBUninterpretedOption : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *nameArray;
@property (readonly, nonatomic) unsigned long long nameArray_Count;
@property (copy, nonatomic) NSString *identifierValue;
@property (nonatomic) char hasIdentifierValue;
@property (nonatomic) unsigned long long positiveIntValue;
@property (nonatomic) char hasPositiveIntValue;
@property (nonatomic) long long negativeIntValue;
@property (nonatomic) char hasNegativeIntValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasDoubleValue;
@property (copy, nonatomic) NSData *stringValue;
@property (nonatomic) char hasStringValue;
@property (copy, nonatomic) NSString *aggregateValue;
@property (nonatomic) char hasAggregateValue;

+ (id)descriptor;

@end
