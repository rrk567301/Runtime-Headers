@class RSDoorWindowPostProcessor, RSBayWindowFPRemoval, RSStructurePostProcess, RSOutsideObjectRemoval, NSMutableDictionary, RSCurvedWallDetection, RSOfflineKeyframeAccumulation, RSNonUniformHeightEstimation, RSDeduplicateOpeningOpenDoor, RSOpeningHeightAlignment, RSOfflineGeometryCalculation, RSDoorWindowOfflineDetector, RSOfflineProjection2DZNode, RSOnlineOfflineAssociation, RSFloorEstimation, RSWallOpeningOfflineDetector, RSRoomTypeGenerator;

@interface RSOfflineFloorPlanGenerator : RSFloorPlanGeneratorBase {
    RSDoorWindowOfflineDetector *_doorWindowDetector;
    RSWallOpeningOfflineDetector *_wallOpeningDetector;
    RSOfflineKeyframeAccumulation *_accumulator;
    RSOfflineGeometryCalculation *_geometryEstimator;
    RSCurvedWallDetection *_curvedWallDetector;
    RSOfflineProjection2DZNode *_projector;
    RSBayWindowFPRemoval *_baywindowFPRemoval;
    RSStructurePostProcess *_structurePostprocess;
    RSDeduplicateOpeningOpenDoor *_deduplicateOpeningOpenDoor;
    RSOnlineOfflineAssociation *_onlineOfflineAssociation;
    RSNonUniformHeightEstimation *_heightEstimator;
    RSFloorEstimation *_floorEstimator;
    RSRoomTypeGenerator *_roomNodeGenerator;
    RSOpeningHeightAlignment *_openingHeightAlignment;
    RSOutsideObjectRemoval *_removeOutsideObject;
    RSDoorWindowPostProcessor *_doorWindowPostProcessor;
    char _wallOpeningMergeEnabled;
    char _openingReplaceOpendoorEnabled;
    char _opendoorReplaceOpeningEnabled;
    char _roomTypeEnabled;
    NSMutableDictionary *_debugInfo;
    char _enableOfflineDump;
}

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)generateFloorPlanWithInputPath:(id)a0 outputPath:(id)a1 debug:(char)a2;

@end
