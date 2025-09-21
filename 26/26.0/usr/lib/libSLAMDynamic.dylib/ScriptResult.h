@class NSArray, NSError;

@interface ScriptResult : NSObject

@property (nonatomic) unsigned long long outcome;
@property (retain, nonatomic) NSArray *messages;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (BOOL)isSuccessful;

@end
