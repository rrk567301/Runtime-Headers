@class NSError, NSArray;

@interface SHKServiceCompletionInfo : NSObject

@property (readonly) BOOL success;
@property (retain) NSError *error;
@property (retain) NSArray *items;
@property (copy) id /* block */ completionHandler;
@property BOOL viewServiceHasAnimated;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 completionHandler:(id /* block */)a1;

@end
