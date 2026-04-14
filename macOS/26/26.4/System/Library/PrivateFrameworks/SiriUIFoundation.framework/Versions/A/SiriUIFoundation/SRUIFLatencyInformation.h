@class NSString, SUIBIntelligenceFlowProgressUpdate, NSArray;

@interface SRUIFLatencyInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *latencySummary;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) BOOL shouldShow;
@property (readonly, nonatomic) SUIBIntelligenceFlowProgressUpdate *underlyingRequestProgress;
@property (readonly, copy, nonatomic) NSArray *associatedAceObjects;
@property (readonly, nonatomic) BOOL showProgress;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithLatencySummary:(id)a0 taskIdentifier:(id)a1 shouldShow:(BOOL)a2 showProgress:(BOOL)a3;
- (id)initWithLatencySummary:(id)a0 taskIdentifier:(id)a1 underlyingRequestProgress:(id)a2 associatedAceObjects:(id)a3 shouldShow:(BOOL)a4 showProgress:(BOOL)a5;
- (id)initWithLatencySummary:(id)a0 taskIdentifier:(id)a1 underlyingRequestProgress:(id)a2 shouldShow:(BOOL)a3 showProgress:(BOOL)a4;

@end
