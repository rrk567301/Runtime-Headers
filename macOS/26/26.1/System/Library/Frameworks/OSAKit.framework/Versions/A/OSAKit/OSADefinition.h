@class OSASuiteDefinition, NSMutableDictionary, OSADictionary;

@interface OSADefinition : NSObject {
    NSMutableDictionary *_attributes;
    OSADictionary *_dictionary;
    OSASuiteDefinition *_suiteDefinition;
}

- (void)setAnchor:(id)a0;
- (id)anchor;
- (void)setCode:(id)a0;
- (id)type;
- (id)itemDescription;
- (void)setUniqueIdentifier:(id)a0;
- (id)code;
- (id)dictionary;
- (void)setName:(id)a0;
- (id)uniqueIdentifier;
- (void)setType:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)setAttributes:(id)a0;
- (id)description;
- (void)dealloc;
- (void)setItemDescription:(id)a0;
- (BOOL)hidden;
- (id)attributes;
- (id)name;
- (void)setDictionary:(id)a0;
- (id)init;
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
