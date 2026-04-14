@class OSASuiteDefinition, NSMutableDictionary, OSADictionary;

@interface OSADefinition : NSObject {
    NSMutableDictionary *_attributes;
    OSADictionary *_dictionary;
    OSASuiteDefinition *_suiteDefinition;
}

- (void)setAnchor:(id)a0;
- (id)anchor;
- (id)uniqueIdentifier;
- (void)setUniqueIdentifier:(id)a0;
- (void)setAttributes:(id)a0;
- (id)itemDescription;
- (void)setType:(id)a0;
- (void)setName:(id)a0;
- (id)dictionary;
- (id)attributes;
- (id)code;
- (id)type;
- (void)setItemDescription:(id)a0;
- (id)description;
- (id)name;
- (void)setDictionary:(id)a0;
- (void)setCode:(id)a0;
- (BOOL)hidden;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
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
