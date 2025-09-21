@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSDictionary *relatedProperties;

+ (char)supportsSecureCoding;
+ (id)sortDescriptorWithRelatedProperties:(id)a0 ascending:(char)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
