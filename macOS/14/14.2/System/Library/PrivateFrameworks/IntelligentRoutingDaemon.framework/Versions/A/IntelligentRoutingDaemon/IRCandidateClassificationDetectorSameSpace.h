@interface IRCandidateClassificationDetectorSameSpace : NSObject

- (BOOL)_isSameSpaceBasedOnPDRFenceForCandidate:(id)a0 basedOnSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (BOOL)_isSameSpaceBrokeredDeviceForCandidate:(id)a0 basedOnLoi:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (BOOL)_isSameSpaceForCandidate:(id)a0 basedOnMiLoPrediction:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_isSameSpaceForCandidate:(id)a0 basedOnNearbyDevices:(id)a1 andExpiryDate:(id)a2 isUWB:(BOOL)a3;
- (id)detectSameSpaceCandidatesFromCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andMiLoPredction:(id)a3 andNearbyDevices:(id)a4 andDate:(id)a5;

@end
