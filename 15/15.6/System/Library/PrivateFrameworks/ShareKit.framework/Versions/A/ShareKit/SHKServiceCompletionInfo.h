@class NSError, NSArray;

@interface SHKServiceCompletionInfo : NSObject

@property (readonly) char success;
@property (retain) NSError *error;
@property (retain) NSArray *items;
@property (copy) id /* block */ completionHandler;
@property char viewServiceHasAnimated;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)initWithItems:(id)a0 completionHandler:(id /* block */)a1;

@end
