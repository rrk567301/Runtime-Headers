@class NSArray, NSDictionary, NSDate, NSError, ICStoreDialogResponse;

@interface ICRadioResponse : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contentDictionary;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic) long long version;
@property (retain, nonatomic) NSArray *performanceMetrics;
@property (readonly, copy, nonatomic) ICStoreDialogResponse *dialog;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSError *serverError;

- (void).cxx_destruct;
- (id)initWithURLResponse:(id)a0;
- (id)initWithResponseDictionary:(id)a0 expirationDate:(id)a1;

@end
