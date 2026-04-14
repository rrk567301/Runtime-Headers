@class OSASuiteDefinition, NSMutableDictionary, OSADictionary;

@interface OSADefinition : NSObject {
    NSMutableDictionary *_attributes;
    OSADictionary *_dictionary;
    OSASuiteDefinition *_suiteDefinition;
}

- (void)setCode:(id)a0;
- (id)code;
- (void)setAnchor:(id)a0;
- (void)setAttributes:(id)a0;
- (void)setType:(id)a0;
- (id)uniqueIdentifier;
- (id)type;
- (id)itemDescription;
- (id)anchor;
- (id)description;
- (id)attributes;
- (id)init;
- (id)name;
- (id)dictionary;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)setDictionary:(id)a0;
- (void)setItemDescription:(id)a0;
- (void)setUniqueIdentifier:(id)a0;
- (BOOL)hidden;
- (void)setName:(id)a0;
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
