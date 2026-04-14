@class NSMutableDictionary;
@protocol POUserIdentifierProvider;

@interface POLoginAccessKeyInstanceManager : NSObject

@property (retain) NSMutableDictionary *listeners;
@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)startListeningForUid:(unsigned int)a0;
- (void)stopListeningForUid:(unsigned int)a0;

@end
