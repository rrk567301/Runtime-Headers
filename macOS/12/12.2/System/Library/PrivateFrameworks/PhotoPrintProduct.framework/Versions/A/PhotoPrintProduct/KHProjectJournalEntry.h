@class KHProject, NSString, NSMutableDictionary;

@interface KHProjectJournalEntry : KHModel {
    long long _projectId;
    unsigned long long _type;
    NSString *_source;
    NSString *_date;
    NSString *_entryText;
    NSString *_imageKey;
    long long _linkedEntryId;
    NSMutableDictionary *_attributeCache;
}

@property (readonly, nonatomic) KHProject *project;

- (void)dealloc;
- (unsigned long long)type;
- (void)setType:(unsigned long long)a0;
- (id)date;
- (id)source;
- (id)attributes;
- (void)remove;
- (void)setDate:(id)a0;
- (void)setSource:(id)a0;
- (id)clone;
- (id)attributeForKey:(id)a0;
- (void)removeAttributeForKey:(id)a0;
- (void)setProjectId:(long long)a0;
- (long long)projectId;
- (long long)sortByType:(id)a0;
- (BOOL)isProjectModel;
- (void)writeValue:(id)a0 toField:(id)a1;
- (id)entryText;
- (id)imageKey;
- (long long)linkedEntryId;
- (void)cacheProjectId:(long long)a0;
- (void)cacheType:(unsigned long long)a0;
- (void)cacheSource:(id)a0;
- (void)cacheDate:(id)a0;
- (void)cacheEntryText:(id)a0;
- (void)cacheImageKey:(id)a0;
- (void)cacheLinkedEntryId:(long long)a0;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2;
- (id)cloneInDatabase:(id)a0;
- (void)setEntryText:(id)a0 force:(BOOL)a1;
- (void)setLinkedEntryId:(long long)a0;
- (id)linkedJournalEntry;
- (void)loadAttributes;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (void)setEntryText:(id)a0;
- (void)setImageKey:(id)a0;
- (void)removeLinkedJournalEntry;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2;

@end
