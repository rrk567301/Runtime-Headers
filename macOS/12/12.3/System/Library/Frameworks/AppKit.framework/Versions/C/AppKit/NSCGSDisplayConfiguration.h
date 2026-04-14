@class NSArray;

@interface NSCGSDisplayConfiguration : NSObject {
    unsigned long long _reconfigureSeed;
    unsigned long long _acceleratorSeed;
}

@property (class, readonly) BOOL displaysWillChange;

@property (readonly) double flipOffset;
@property (readonly) unsigned int changeSeed;
@property (readonly, copy) NSArray *uniqueDisplays;

+ (id)currentConfiguration;
+ (void)addChangeObserver:(id /* block */)a0;
+ (void)updateAndNotifyIfNeeded;

- (void)dealloc;
- (id)description;
- (id)initWithUniqueDisplays:(id)a0 changeSeed:(unsigned int)a1 flipOffset:(double)a2 reconfigureSeed:(unsigned long long)a3 acceleratorSeed:(unsigned long long)a4;
- (BOOL)isEqualToDisplayConfiguration:(id)a0;
- (BOOL)_validateChanges:(unsigned long long)a0 fromDisplayConfiguration:(id)a1;

@end
