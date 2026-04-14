@class OSASuiteDefinition, NSMutableDictionary, OSADictionary;

@interface OSADefinition : NSObject {
    NSMutableDictionary *_attributes;
    OSADictionary *_dictionary;
    OSASuiteDefinition *_suiteDefinition;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (id)code;
- (void)setHidden:(BOOL)a0;
- (BOOL)hidden;
- (id)type;
- (void)setType:(id)a0;
- (void)setDictionary:(id)a0;
- (id)dictionary;
- (void)setName:(id)a0;
- (id)uniqueIdentifier;
- (void)setAttributes:(id)a0;
- (void)setCode:(id)a0;
- (id)attributes;
- (void)setUniqueIdentifier:(id)a0;
- (id)itemDescription;
- (id)anchor;
- (void)setAnchor:(id)a0;
- (void)setItemDescription:(id)a0;
- (id)itemKind;
- (BOOL)isExpandable;
- (id)itemIcon;
- (id)viewAnchor;
- (BOOL)isOutlinable;
- (id)initWithDictionary:(id)a0 suiteDefinition:(id)a1;
- (void)setViewAnchor:(id)a0;
- (id)suiteDefinition;
- (void)setSuiteDefinition:(id)a0;
- (id)itemSuite;
- (BOOL)containsSearchValue:(id)a0;

@end
