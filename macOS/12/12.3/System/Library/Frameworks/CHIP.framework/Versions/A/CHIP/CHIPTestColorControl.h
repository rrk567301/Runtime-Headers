@interface CHIPTestColorControl : CHIPColorControl

@property (readonly) struct ColorControlClusterTest { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<chip::SessionHandle> { BOOL mHasValue; union Value { struct SessionHandle { unsigned long long mPeerNodeId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mLocalSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mPeerSessionId; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; unsigned char mFabric; struct Optional<chip::ReferenceCountedHandle<chip::Transport::UnauthenticatedSession>> { BOOL mHasValue; union Value { struct ReferenceCountedHandle<chip::Transport::UnauthenticatedSession> { struct UnauthenticatedSession *mTarget; } mData; } mValue; } mUnauthenticatedSessionHandle; } mData; } mValue; } mSessionHandle; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)writeAttributeAttributeListWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeClusterRevisionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentHueWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentSaturationWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeRemainingTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentXWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCurrentYWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeDriftCompensationWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCompensationTextWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorTemperatureWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeNumberOfPrimariesWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary1XWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary1YWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary1IntensityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary2XWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary2YWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary2IntensityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary3XWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary3YWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary3IntensityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary4XWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary4YWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary4IntensityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary5XWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary5YWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary5IntensityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary6XWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary6YWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributePrimary6IntensityWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeEnhancedCurrentHueWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeEnhancedColorModeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorLoopActiveWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorLoopDirectionWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorLoopTimeWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorLoopStartEnhancedHueWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorLoopStoredEnhancedHueWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorCapabilitiesWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorTempPhysicalMinWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeColorTempPhysicalMaxWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeAttributeCoupleColorTempToLevelMinMiredsWithValue:(id)a0 completionHandler:(id /* block */)a1;

@end
