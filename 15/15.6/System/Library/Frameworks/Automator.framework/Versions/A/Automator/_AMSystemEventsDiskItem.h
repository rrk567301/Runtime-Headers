@class NSString, NSDate;

@interface _AMSystemEventsDiskItem : SBObject <_AMSystemEventsGenericMethods>

@property (readonly) char busyStatus;
@property (readonly, copy) _AMSystemEventsDiskItem *container;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *displayedName;
@property (copy) NSDate *modificationDate;
@property (copy) NSString *name;
@property (readonly, copy) NSString *nameExtension;
@property (readonly) char packageFolder;
@property (readonly, copy) NSString *path;
@property (readonly) long long physicalSize;
@property (readonly, copy) NSString *POSIXPath;
@property (readonly) long long size;
@property (readonly, copy) NSString *URL;
@property char visible;
@property (readonly, copy) NSString *volume;

- (void)delete;
- (id)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
