@class NSArray, NSDate;

@interface KTOptIOValidatorResult : NSObject

@property unsigned long long state;
@property (retain) NSArray *uriNeedsOptInChange;
@property (retain) NSArray *uris;
@property (retain) NSDate *timestamp;

- (void).cxx_destruct;
- (id)initWithState:(unsigned long long)a0 timestamp:(id)a1;

@end
