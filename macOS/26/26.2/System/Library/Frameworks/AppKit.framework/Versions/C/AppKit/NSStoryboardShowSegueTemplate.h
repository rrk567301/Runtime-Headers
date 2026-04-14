@class NSString;

@interface NSStoryboardShowSegueTemplate : NSStoryboardSegueTemplate <NSCoding>

@property (readonly, nonatomic) NSString *uniqueControllerIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_perform:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
