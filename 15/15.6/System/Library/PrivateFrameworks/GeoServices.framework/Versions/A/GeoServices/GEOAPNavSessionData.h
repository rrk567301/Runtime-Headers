@class NSUUID;

@interface GEOAPNavSessionData : NSObject <NSSecureCoding> {
    double _startTime;
    double _accumulatedNavTime;
    char _isPaused;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *routeId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) char isEV;
@property (readonly, nonatomic) char isActive;
@property (readonly, nonatomic) double legStartTime;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearNavSession;
- (double)accumulatedSessionDurationAt:(double)a0;
- (void)endNavWithRouteId:(id)a0 at:(double)a1;
- (char)isCurrentRouteId:(id)a0;
- (void)pauseNavWithRouteId:(id)a0 at:(double)a1;
- (void)rerollAt:(double)a0;
- (void)resumeNavWithRouteId:(id)a0 at:(double)a1;
- (void)startNavWithRouteId:(id)a0 isEV:(char)a1 at:(double)a2;

@end
