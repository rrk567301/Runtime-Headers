@class NSURL;

@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerItemLeafRepresentation

@property (retain, nonatomic, setter=setURL:) NSURL *url;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEquivalent:(id)a0;
- (id)initWithTitle:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithURL:(id)a0 title:(id)a1 uniqueIdentifier:(id)a2;

@end
