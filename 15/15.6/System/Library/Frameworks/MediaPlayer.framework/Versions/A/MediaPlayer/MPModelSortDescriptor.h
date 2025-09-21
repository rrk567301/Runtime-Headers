@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSArray *keyPath;

+ (char)supportsSecureCoding;
+ (id)sortDescriptorWithKeyPath:(id)a0 ascending:(char)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
