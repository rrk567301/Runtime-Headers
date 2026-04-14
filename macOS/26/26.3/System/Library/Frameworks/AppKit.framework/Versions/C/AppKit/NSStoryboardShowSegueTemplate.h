@class NSString;

@interface NSStoryboardShowSegueTemplate : NSStoryboardSegueTemplate <NSCoding>

@property (readonly, nonatomic) NSString *uniqueControllerIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_perform:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
