@class NSError;

@interface SHMediaLibraryRequest : NSObject

@property (retain) NSError *error;
@property (copy) id /* block */ completionHandler;

- (void).cxx_destruct;

@end
