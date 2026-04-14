@class NSString;

@interface CDMCATIIntent : NSObject

@property (retain) NSString *guid;
@property (retain) NSString *intentName;
@property (retain) NSString *ensemble;

- (void).cxx_destruct;
- (id)init;
- (id)initWithGuid:(id)a0 intentName:(id)a1 ensemble:(id)a2;

@end
