@class NSURL;

@interface BDSAppGroupContainer : NSObject

@property (class, getter=isUnitTesting) char unitTesting;
@property (class, readonly) NSURL *containerURL;
@property (class, readonly) NSURL *documentsURL;

+ (id)containerIdentifier;

@end
