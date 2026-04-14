@class NSSet, NSMutableSet;
@protocol ATXInformationHeuristicRefreshTriggerDelegate;

@interface ATXInformationHeuristicRefreshTrigger : NSObject <NSSecureCoding> {
    NSMutableSet *_registeredHeuristics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *registeredHeuristics;
@property (weak, nonatomic) id<ATXInformationHeuristicRefreshTriggerDelegate> delegate;

- (void)stopTriggeringRefreshForHeuristicIfAlready:(id)a0;
- (void)stopTriggeringRefreshForAllHeuristics;
- (void)_stop;
- (void)startTriggeringRefreshForHeuristicIfNotAlready:(id)a0;
- (id)_safeDecodeObjectOfClasses:(id)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (id)_safeDecodeObjectOfClass:(Class)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(BOOL)a3;
- (id)init;
- (void)_start;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
