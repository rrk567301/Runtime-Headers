@protocol CLSCurationItem;

@interface CLSCurationDebugItem : CLSCurationDebugObject {
    unsigned long long _dedupingType;
    CLSCurationDebugItem *_dedupedDebugItem;
}

@property (retain, nonatomic) id<CLSCurationItem> item;

+ (id)stringForDedupingType:(unsigned long long)a0;

- (id)identifier;
- (id)initWithItem:(id)a0;
- (id)timestamp;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)dupeToDebugItem:(id)a0 withDedupingType:(unsigned long long)a1;

@end
