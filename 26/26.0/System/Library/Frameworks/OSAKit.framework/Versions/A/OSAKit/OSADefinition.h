@class OSASuiteDefinition, NSMutableDictionary, OSADictionary;

@interface OSADefinition : NSObject {
    NSMutableDictionary *_attributes;
    OSADictionary *_dictionary;
    OSASuiteDefinition *_suiteDefinition;
}

- (id)anchor;
- (void)setUniqueIdentifier:(id)a0;
- (void)setAttributes:(id)a0;
- (void)setItemDescription:(id)a0;
- (void)setCode:(id)a0;
- (id)code;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)setAnchor:(id)a0;
- (id)type;
- (id)init;
- (void)setType:(id)a0;
- (BOOL)hidden;
- (id)description;
- (id)itemDescription;
- (void)setDictionary:(id)a0;
- (id)name;
- (id)attributes;
- (id)dictionary;
- (id)uniqueIdentifier;
- (void)setHidden:(BOOL)a0;
- (id)itemKind;
- (BOOL)isExpandable;
- (id)itemIcon;
- (id)suiteDefinition;
- (BOOL)containsSearchValue:(id)a0;
- (id)initWithDictionary:(id)a0 suiteDefinition:(id)a1;
- (BOOL)isOutlinable;
- (id)itemSuite;
- (void)setSuiteDefinition:(id)a0;
- (void)setViewAnchor:(id)a0;
- (id)viewAnchor;

@end
