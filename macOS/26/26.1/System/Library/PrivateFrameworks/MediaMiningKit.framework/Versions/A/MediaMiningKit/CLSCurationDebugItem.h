@protocol CLSCurationItem;

@interface CLSCurationDebugItem : CLSCurationDebugObject {
    unsigned long long _dedupingType;
    CLSCurationDebugItem *_dedupedDebugItem;
}

@property (retain, nonatomic) id<CLSCurationItem> item;

+ (id)stringForDedupingType:(unsigned long long)a0;

- (id)initWithItem:(id)a0;
- (id)dictionaryRepresentation;
- (id)identifier;
- (void).cxx_destruct;
- (id)timestamp;
- (void)dupeToDebugItem:(id)a0 withDedupingType:(unsigned long long)a1;

@end
