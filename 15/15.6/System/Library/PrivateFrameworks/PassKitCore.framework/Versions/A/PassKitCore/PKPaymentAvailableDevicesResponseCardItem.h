@class NSString, NSNumber;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject

@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSNumber *cardTypeCode;
@property (copy, nonatomic) NSString *currentStatus;
@property (nonatomic) char supportsInApp;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
