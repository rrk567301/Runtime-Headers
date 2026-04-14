@class WFContextualActionMediaItemDescriptor;

@interface WFAddToMediaLibraryContextualAction : WFContextualAction

@property (readonly, nonatomic) WFContextualActionMediaItemDescriptor *mediaItemDescriptor;

+ (BOOL)supportsSecureCoding;

- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_staticDisplayStringForDecoding;
- (id)initWithMediaItemDescriptor:(id)a0;

@end
