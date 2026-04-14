@class NSMapTable;

@interface TUINSCursorLocationCache : NSObject

@property (readonly, nonatomic) NSMapTable *cache;
@property (readonly, nonatomic) double expirationThreshold;

- (void).cxx_destruct;
- (id)init;
- (void)expireEntryForClient:(id)a0;
- (id)readForClient:(id)a0;
- (void)writeLocation:(struct CGPoint { double x0; double x1; })a0 forClient:(id)a1;

@end
