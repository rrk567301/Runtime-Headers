@class NSString;

@interface _NSKVOCompatibility : NSObject <_NSKVOCompatibilityShim>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_noteProcessHasUsedKVOSwiftOverlay;
+ (char)_releasesObservationBlockOnInvalidation;
+ (void)_setRequiresSilencingExceptions:(char)a0;


@end
