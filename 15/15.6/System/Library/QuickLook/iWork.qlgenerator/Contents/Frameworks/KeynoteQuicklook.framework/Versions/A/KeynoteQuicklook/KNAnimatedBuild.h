@class NSString, NSDictionary, NSArray, KNBuildAttributes;

@interface KNAnimatedBuild : NSObject <NSSecureCoding> {
    KNAnimatedBuild *_parentBuild;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long buildType;
@property (readonly, nonatomic) NSString *effectIdentifier;
@property (nonatomic) long long eventIndex;
@property (nonatomic) long long indexInEvent;
@property (readonly, nonatomic) long long stageIndex;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) unsigned long long deliveryOption;
@property (readonly, nonatomic) unsigned long long deliveryStyle;
@property (readonly, nonatomic) Class pluginClass;
@property (readonly, nonatomic) KNBuildAttributes *attributes;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double eventStartTime;
@property (nonatomic) double duration;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double eventEndTime;
@property (readonly, nonatomic) char automatic;
@property (nonatomic) char animateAtEndOfPreviousBuild;
@property (readonly, nonatomic) char isBuildIn;
@property (readonly, nonatomic) char isBuildOut;
@property (readonly, nonatomic) char isActionBuild;
@property (readonly, nonatomic) char isEmphasisBuild;
@property (readonly, nonatomic) char isContentBuild;
@property (readonly, nonatomic) char isLineDrawBuild;
@property (readonly, nonatomic) char isDriftBuild;
@property (readonly, nonatomic) char isMagicChartBuild;
@property (nonatomic) char isVisibleAtBeginning;
@property (nonatomic) char isVisibleAtEnd;
@property (nonatomic) char isLastStage;
@property (readonly, nonatomic) char isImplicitlyVisibleAtBeginning;
@property (nonatomic) char isInitialAmbientBuild;
@property (copy, nonatomic) NSDictionary *previousAttributes;
@property (copy, nonatomic) NSDictionary *finalAttributes;
@property (readonly, nonatomic) KNAnimatedBuild *parentBuild;
@property (readonly, nonatomic) NSArray *childBuilds;
@property (readonly, nonatomic) char isParentBuild;
@property (readonly, nonatomic) char isChildBuild;
@property (readonly, nonatomic) double durationWithChildren;
@property (readonly, nonatomic) char isActionScale;
@property (readonly, nonatomic) char isActionRotation;
@property (readonly, nonatomic) char isActionOpacity;
@property (readonly, nonatomic) char isActionMotionPath;
@property (readonly, nonatomic) char hasPreviousActionAttributes;
@property (readonly, nonatomic) char hasPreviousActionScale;
@property (readonly, nonatomic) char hasPreviousActionRotate;
@property (readonly, nonatomic) char hasFinalActionScale;
@property (readonly, nonatomic) char hasFinalActionRotate;
@property (readonly, nonatomic) double initialScale;
@property (readonly, nonatomic) double finalScale;
@property (readonly, nonatomic) double maxScale;
@property (readonly, nonatomic) NSArray *requiredScales;
@property (readonly, nonatomic) double initialRotation;
@property (readonly, nonatomic) double finalRotation;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isBuildByObject;
- (void)addChildBuild:(id)a0;
- (id)initWithBuildType:(long long)a0 effectIdentifier:(id)a1 attributes:(id)a2 pluginClass:(Class)a3 deliveryStyle:(unsigned long long)a4 deliveryOption:(unsigned long long)a5 eventIndex:(long long)a6 stageIndex:(long long)a7 startTime:(double)a8 eventStartTime:(double)a9 duration:(double)a10 direction:(unsigned long long)a11 automatic:(char)a12 animateAtEndOfPreviousBuild:(char)a13 parentBuild:(id)a14;
- (char)isRelatedTo:(id)a0;
- (char)isSiblingTo:(id)a0;
- (char)p_isActionEffect:(id)a0;

@end
