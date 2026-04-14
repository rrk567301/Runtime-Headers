@class NSString;

@interface LACBootArgParser : NSObject <LACBootArgParsing>

@property (class, readonly, nonatomic) LACBootArgParser *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isBootArgEnabled:(id)a0;
- (BOOL)isInternalBootArgEnabled:(id)a0;

@end
