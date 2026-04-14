@interface _PSLastCommunicatedFeatures : NSObject

+ (id)lastOutgoingInstantMessageFromCandidates:(id)a0 caches:(id)a1 store:(id)a2;
+ (id)lastIncomingInstantMessageFromCandidates:(id)a0 caches:(id)a1 store:(id)a2;
+ (id)lastOutgoingShareFromCandidates:(id)a0 caches:(id)a1 store:(id)a2;
+ (id)findCandidateInteractionInCaches:(id)a0 caches:(id)a1 direction:(id)a2 mechanisms:(id)a3;
+ (id)lastInteractionFromCandidate:(id)a0 caches:(id)a1 store:(id)a2 direction:(id)a3 mechanisms:(id)a4;
+ (double)timeIntervalSince1970ForInteraction:(id)a0;

@end
