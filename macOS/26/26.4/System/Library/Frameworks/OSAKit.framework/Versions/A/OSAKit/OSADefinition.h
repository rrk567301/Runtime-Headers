@class OSASuiteDefinition, NSMutableDictionary, OSADictionary;

@interface OSADefinition : NSObject {
    NSMutableDictionary *_attributes;
    OSADictionary *_dictionary;
    OSASuiteDefinition *_suiteDefinition;
}

- (void)setAnchor:(id)a0;
- (id)code;
- (id)anchor;
- (void)setCode:(id)a0;
- (id)uniqueIdentifier;
- (void)setDictionary:(id)a0;
- (id)name;
- (void)setItemDescription:(id)a0;
- (void)setUniqueIdentifier:(id)a0;
- (void)setAttributes:(id)a0;
- (void)setHidden:(BOOL)a0;
- (id)attributes;
- (void)setName:(id)a0;
- (void)setType:(id)a0;
- (id)type;
- (id)init;
- (id)description;
- (id)itemDescription;
- (id)dictionary;
- (BOOL)hidden;
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
