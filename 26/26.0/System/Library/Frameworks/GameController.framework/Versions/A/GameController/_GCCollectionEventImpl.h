@class NSArray, NSString, NSMutableDictionary;

@interface _GCCollectionEventImpl : NSObject <_GCCollectionEvent> {
    NSMutableDictionary *_values;
}

@property (nonatomic) unsigned long long timestamp;
@property (readonly) NSArray *allKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)floatValueForKey:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setFloatValue:(float)a0 forKey:(unsigned long long)a1;
- (BOOL)hasValidValueForKey:(unsigned long long)a0;
- (id)initWithCollectionEvent:(id)a0;
- (id)initWithTimeStamp:(unsigned long long)a0 keys:(const unsigned long long *)a1 values:(const float *)a2 count:(unsigned long long)a3;

@end
