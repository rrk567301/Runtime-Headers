@class NSSet, NSMutableSet;
@protocol ATXInformationHeuristicRefreshTriggerDelegate;

@interface ATXInformationHeuristicRefreshTrigger : NSObject <NSSecureCoding> {
    NSMutableSet *_registeredHeuristics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *registeredHeuristics;
@property (weak, nonatomic) id<ATXInformationHeuristicRefreshTriggerDelegate> delegate;

- (void)startTriggeringRefreshForHeuristicIfNotAlready:(id)a0;
- (void)stopTriggeringRefreshForAllHeuristics;
- (id)_safeDecodeObjectOfClasses:(id)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (void)_stop;
- (void)_start;
- (void)stopTriggeringRefreshForHeuristicIfAlready:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_safeDecodeObjectOfClass:(Class)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (void).cxx_destruct;

@end
