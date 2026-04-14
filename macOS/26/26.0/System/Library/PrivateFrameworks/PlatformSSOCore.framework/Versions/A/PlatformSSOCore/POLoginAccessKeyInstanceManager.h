@class NSMutableDictionary;
@protocol POUserIdentifierProvider;

@interface POLoginAccessKeyInstanceManager : NSObject

@property (retain) NSMutableDictionary *listeners;
@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)startListeningForUid:(unsigned int)a0;
- (void)stopListeningForUid:(unsigned int)a0;

@end
