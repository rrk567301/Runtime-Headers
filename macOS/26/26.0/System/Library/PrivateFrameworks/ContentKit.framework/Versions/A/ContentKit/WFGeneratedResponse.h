@class NSString, NSArray, NSDictionary, NSDate, NSNumber, _TtC10ContentKit35WFGeneratedResponseFactoryDataModel;

@interface WFGeneratedResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *rawResponse;
@property (retain, nonatomic) NSArray *list;
@property (copy, nonatomic) NSNumber *booleanValue;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSDictionary *dictionary;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) _TtC10ContentKit35WFGeneratedResponseFactoryDataModel *responseDataModel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawResponse:(id)a0 list:(id)a1 booleanValue:(id)a2 numberValue:(id)a3 dictionary:(id)a4 date:(id)a5 responseDataModel:(id)a6;

@end
