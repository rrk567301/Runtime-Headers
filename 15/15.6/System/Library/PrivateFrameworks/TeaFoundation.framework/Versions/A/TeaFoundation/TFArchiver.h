@class NSString;

@interface TFArchiver : NSObject <TFArchiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)archiveDirectory:(id)a0 toLocation:(id)a1;
- (char)unarchive:(id)a0 toLocation:(id)a1;

@end
