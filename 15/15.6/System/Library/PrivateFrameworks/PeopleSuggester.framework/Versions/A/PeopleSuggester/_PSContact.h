@class CNContact;

@interface _PSContact : NSObject

@property (copy, nonatomic) CNContact *cnContact;
@property (nonatomic) char isChild;

- (void).cxx_destruct;
- (id)initWithCNContact:(id)a0 isChild:(char)a1;

@end
