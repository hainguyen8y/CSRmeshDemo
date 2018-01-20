/*
 Copyright [2015] Qualcomm Technologies International, Ltd.
*/

#import <UIKit/UIKit.h>

//! Project version number for CSRmeshRestClient.
FOUNDATION_EXPORT double CSRmeshRestClientVersionNumber;

//! Project version string for CSRmeshRestClient.
FOUNDATION_EXPORT const unsigned char CSRmeshRestClientVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CSRmeshRestClient/PublicHeader.h>

#import <CSRmeshRestClient/CSRRestApiStatusCode.h>
#import <CSRmeshRestClient/CSRRestConfig.h>
#import <CSRmeshRestClient/NSError+StatusCode.h>
#import <CSRmeshRestClient/CSRRestActionModelApi.h>
#import <CSRmeshRestClient/CSRRestActuatorModelApi.h>
#import <CSRmeshRestClient/CSRRestAssetModelApi.h>
#import <CSRmeshRestClient/CSRRestAttentionModelApi.h>
#import <CSRmeshRestClient/CSRRestAuthenticationApi.h>
#import <CSRmeshRestClient/CSRRestBaseApi.h>
#import <CSRmeshRestClient/CSRRestBatteryModelApi.h>
#import <CSRmeshRestClient/CSRRestBeaconModelApi.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyModelApi.h>
#import <CSRmeshRestClient/CSRRestBearerModelApi.h>
#import <CSRmeshRestClient/CSRRestConfigModelApi.h>
#import <CSRmeshRestClient/CSRRestDataModelApi.h>
#import <CSRmeshRestClient/CSRRestExtensionModelApi.h>
#import <CSRmeshRestClient/CSRRestFirmwareModelApi.h>
#import <CSRmeshRestClient/CSRRestGroupModelApi.h>
#import <CSRmeshRestClient/CSRRestLightModelApi.h>
#import <CSRmeshRestClient/CSRRestMeshConfigApi.h>
#import <CSRmeshRestClient/CSRRestMeshConfigGatewayApi.h>
#import <CSRmeshRestClient/CSRRestMeshConfigModelApi.h>
#import <CSRmeshRestClient/CSRRestOpcodeManagementApi.h>
#import <CSRmeshRestClient/CSRRestPingModelApi.h>
#import <CSRmeshRestClient/CSRRestPowerModelApi.h>
#import <CSRmeshRestClient/CSRRestSensorModelApi.h>
#import <CSRmeshRestClient/CSRRestTimeModelApi.h>
#import <CSRmeshRestClient/CSRRestTrackerModelApi.h>
#import <CSRmeshRestClient/CSRRestTuningModelApi.h>
#import <CSRmeshRestClient/CSRRestWatchdogModelApi.h>
#import <CSRmeshRestClient/CSRRestActionActionStatus.h>
#import <CSRmeshRestClient/CSRRestActionActionStatusResponse.h>
#import <CSRmeshRestClient/CSRRestActionDeleteAck.h>
#import <CSRmeshRestClient/CSRRestActionDeleteAckResponse.h>
#import <CSRmeshRestClient/CSRRestActionDeleteRequest.h>
#import <CSRmeshRestClient/CSRRestActionGetActionAck.h>
#import <CSRmeshRestClient/CSRRestActionGetActionAckResponse.h>
#import <CSRmeshRestClient/CSRRestActionGetActionStatusRequest.h>
#import <CSRmeshRestClient/CSRRestActionGetRequest.h>
#import <CSRmeshRestClient/CSRRestActionSetActionAck.h>
#import <CSRmeshRestClient/CSRRestActionSetActionAckResponse.h>
#import <CSRmeshRestClient/CSRRestActionSetActionRequest.h>
#import <CSRmeshRestClient/CSRRestActuatorGetTypesRequest.h>
#import <CSRmeshRestClient/CSRRestActuatorGetValueAckRequest.h>
#import <CSRmeshRestClient/CSRRestActuatorSetValueRequest.h>
#import <CSRmeshRestClient/CSRRestActuatorTypes.h>
#import <CSRmeshRestClient/CSRRestActuatorTypesResponse.h>
#import <CSRmeshRestClient/CSRRestActuatorValueAck.h>
#import <CSRmeshRestClient/CSRRestActuatorValueAckResponse.h>
#import <CSRmeshRestClient/CSRRestAssetGetStateRequest.h>
#import <CSRmeshRestClient/CSRRestAssetSetStateRequest.h>
#import <CSRmeshRestClient/CSRRestAssetState.h>
#import <CSRmeshRestClient/CSRRestAssetStateResponse.h>
#import <CSRmeshRestClient/CSRRestAssociationStatusLink.h>
#import <CSRmeshRestClient/CSRRestAttentionSetStateRequest.h>
#import <CSRmeshRestClient/CSRRestAttentionState.h>
#import <CSRmeshRestClient/CSRRestAttentionStateResponse.h>
#import <CSRmeshRestClient/CSRRestBaseObject.h>
#import <CSRmeshRestClient/CSRRestBatteryGetStateRequest.h>
#import <CSRmeshRestClient/CSRRestBatteryState.h>
#import <CSRmeshRestClient/CSRRestBatteryStateResponse.h>
#import <CSRmeshRestClient/CSRRestBeaconBeaconStatus.h>
#import <CSRmeshRestClient/CSRRestBeaconBeaconStatusResponse.h>
#import <CSRmeshRestClient/CSRRestBeaconGetBeaconStatusRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconGetPayloadRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconGetTypesRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconPayloadAck.h>
#import <CSRmeshRestClient/CSRRestBeaconPayloadAckRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconPayloadAckResponse.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyAddRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyCommandStatusDevices.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyCommandStatusDevicesResponse.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyDevices.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyDevicesResponse.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyGetDevicesRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyGetStatusRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyProxyStatus.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyProxyStatusResponse.h>
#import <CSRmeshRestClient/CSRRestBeaconProxyRemoveRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconSetPayload.h>
#import <CSRmeshRestClient/CSRRestBeaconSetPayloadRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconSetPayloadResponse.h>
#import <CSRmeshRestClient/CSRRestBeaconSetStatusRequest.h>
#import <CSRmeshRestClient/CSRRestBeaconTypes.h>
#import <CSRmeshRestClient/CSRRestBeaconTypesResponse.h>
#import <CSRmeshRestClient/CSRRestBearerGetStateRequest.h>
#import <CSRmeshRestClient/CSRRestBearerSetStateRequest.h>
#import <CSRmeshRestClient/CSRRestBearerState.h>
#import <CSRmeshRestClient/CSRRestBearerStateResponse.h>
#import <CSRmeshRestClient/CSRRestBlacklistDeviceRequest.h>
#import <CSRmeshRestClient/CSRRestBlacklistDeviceStateResponse.h>
#import <CSRmeshRestClient/CSRRestConfigDeviceIdentifier.h>
#import <CSRmeshRestClient/CSRRestConfigDeviceIdentifierResponse.h>
#import <CSRmeshRestClient/CSRRestConfigDiscoverDeviceRequest.h>
#import <CSRmeshRestClient/CSRRestConfigGetInfoRequest.h>
#import <CSRmeshRestClient/CSRRestConfigGetMessageParamsRequest.h>
#import <CSRmeshRestClient/CSRRestConfigGetParametersRequest.h>
#import <CSRmeshRestClient/CSRRestConfigInfo.h>
#import <CSRmeshRestClient/CSRRestConfigInfoResponse.h>
#import <CSRmeshRestClient/CSRRestConfigLastSequenceNumberRequest.h>
#import <CSRmeshRestClient/CSRRestConfigMessageParams.h>
#import <CSRmeshRestClient/CSRRestConfigMessageParamsResponse.h>
#import <CSRmeshRestClient/CSRRestConfigParameters.h>
#import <CSRmeshRestClient/CSRRestConfigParametersResponse.h>
#import <CSRmeshRestClient/CSRRestConfigResetDeviceRequest.h>
#import <CSRmeshRestClient/CSRRestConfigSetDeviceIdentifierRequest.h>
#import <CSRmeshRestClient/CSRRestConfigSetMessageParamsRequest.h>
#import <CSRmeshRestClient/CSRRestConfigSetParametersRequest.h>
#import <CSRmeshRestClient/CSRRestCreateFileRequest.h>
#import <CSRmeshRestClient/CSRRestCreateFileResponse.h>
#import <CSRmeshRestClient/CSRRestCreateSiteRequest.h>
#import <CSRmeshRestClient/CSRRestCreateSiteResponse.h>
#import <CSRmeshRestClient/CSRRestCreateTenantRequest.h>
#import <CSRmeshRestClient/CSRRestCreateTenantResponse.h>
#import <CSRmeshRestClient/CSRRestDataReceivedResponse.h>
#import <CSRmeshRestClient/CSRRestDataResponseLink.h>
#import <CSRmeshRestClient/CSRRestDataSendRequest.h>
#import <CSRmeshRestClient/CSRRestErrorInfo.h>
#import <CSRmeshRestClient/CSRRestErrorResponse.h>
#import <CSRmeshRestClient/CSRRestExtensionConflict.h>
#import <CSRmeshRestClient/CSRRestExtensionConflictResponse.h>
#import <CSRmeshRestClient/CSRRestExtensionRequestRequest.h>
#import <CSRmeshRestClient/CSRRestFirmwareGetVersionRequest.h>
#import <CSRmeshRestClient/CSRRestFirmwareVersion.h>
#import <CSRmeshRestClient/CSRRestFirmwareVersionResponse.h>
#import <CSRmeshRestClient/CSRRestGetFileResponse.h>
#import <CSRmeshRestClient/CSRRestGetGatewayProfileResponse.h>
#import <CSRmeshRestClient/CSRRestGetSitesResponse.h>
#import <CSRmeshRestClient/CSRRestGetTenantsResponse.h>
#import <CSRmeshRestClient/CSRRestGroupGetModelGroupidRequest.h>
#import <CSRmeshRestClient/CSRRestGroupGetNumberOfModelGroupidsRequest.h>
#import <CSRmeshRestClient/CSRRestGroupModelGroupid.h>
#import <CSRmeshRestClient/CSRRestGroupModelGroupidResponse.h>
#import <CSRmeshRestClient/CSRRestGroupNumberOfModelGroupids.h>
#import <CSRmeshRestClient/CSRRestGroupNumberOfModelGroupidsResponse.h>
#import <CSRmeshRestClient/CSRRestGroupSetModelGroupidRequest.h>
#import <CSRmeshRestClient/CSRRestIssueExtendedOpcodeMessageRequest.h>
#import <CSRmeshRestClient/CSRRestLightGetStateRequest.h>
#import <CSRmeshRestClient/CSRRestLightGetWhiteRequest.h>
#import <CSRmeshRestClient/CSRRestLightSetColorTempRequest.h>
#import <CSRmeshRestClient/CSRRestLightSetLevelRequest.h>
#import <CSRmeshRestClient/CSRRestLightSetPowerLevelRequest.h>
#import <CSRmeshRestClient/CSRRestLightSetRgbRequest.h>
#import <CSRmeshRestClient/CSRRestLightSetWhiteRequest.h>
#import <CSRmeshRestClient/CSRRestLightState.h>
#import <CSRmeshRestClient/CSRRestLightStateResponse.h>
#import <CSRmeshRestClient/CSRRestLightWhite.h>
#import <CSRmeshRestClient/CSRRestLightWhiteResponse.h>
#import <CSRmeshRestClient/CSRRestLink.h>
#import <CSRmeshRestClient/CSRRestNewDeviceBroadCastStatusResponse.h>
#import <CSRmeshRestClient/CSRRestObjectTransfer.h>
#import <CSRmeshRestClient/CSRRestObjectTransferedResponse.h>
#import <CSRmeshRestClient/CSRRestObjectTransferRequest.h>
#import <CSRmeshRestClient/CSRRestOpcodeMessage.h>
#import <CSRmeshRestClient/CSRRestOpcodeMessageResponse.h>
#import <CSRmeshRestClient/CSRRestPingRequestRequest.h>
#import <CSRmeshRestClient/CSRRestPingResponse.h>
#import <CSRmeshRestClient/CSRRestPingResponseResponse.h>
#import <CSRmeshRestClient/CSRRestPowerGetStateRequest.h>
#import <CSRmeshRestClient/CSRRestPowerSetStateRequest.h>
#import <CSRmeshRestClient/CSRRestPowerState.h>
#import <CSRmeshRestClient/CSRRestPowerStateResponse.h>
#import <CSRmeshRestClient/CSRRestPowerToggleStateRequest.h>
#import <CSRmeshRestClient/CSRRestRegisterResponseOpcodesRequest.h>
#import <CSRmeshRestClient/CSRRestRegisterRespOpcodesResponse.h>
#import <CSRmeshRestClient/CSRRestResponseLink.h>
#import <CSRmeshRestClient/CSRRestSensorGetStateRequest.h>
#import <CSRmeshRestClient/CSRRestSensorGetTypesRequest.h>
#import <CSRmeshRestClient/CSRRestSensorReadValueRequest.h>
#import <CSRmeshRestClient/CSRRestSensorSetStateRequest.h>
#import <CSRmeshRestClient/CSRRestSensorState.h>
#import <CSRmeshRestClient/CSRRestSensorStateResponse.h>
#import <CSRmeshRestClient/CSRRestSensorTypes.h>
#import <CSRmeshRestClient/CSRRestSensorTypesResponse.h>
#import <CSRmeshRestClient/CSRRestSensorValue.h>
#import <CSRmeshRestClient/CSRRestSensorValueResponse.h>
#import <CSRmeshRestClient/CSRRestSensorWriteValueRequest.h>
#import <CSRmeshRestClient/CSRRestSiteInfoObject.h>
#import <CSRmeshRestClient/CSRRestSiteInfoResponse.h>
#import <CSRmeshRestClient/CSRRestTenantInfoResponse.h>
#import <CSRmeshRestClient/CSRRestTimeGetStateRequest.h>
#import <CSRmeshRestClient/CSRRestTimeSetStateRequest.h>
#import <CSRmeshRestClient/CSRRestTimeState.h>
#import <CSRmeshRestClient/CSRRestTimeStateResponse.h>
#import <CSRmeshRestClient/CSRRestTrackerClearCacheRequest.h>
#import <CSRmeshRestClient/CSRRestTrackerFindRequest.h>
#import <CSRmeshRestClient/CSRRestTrackerFound.h>
#import <CSRmeshRestClient/CSRRestTrackerFoundResponse.h>
#import <CSRmeshRestClient/CSRRestTrackerSetProximityConfigRequest.h>
#import <CSRmeshRestClient/CSRRestTuningAckConfig.h>
#import <CSRmeshRestClient/CSRRestTuningAckConfigResponse.h>
#import <CSRmeshRestClient/CSRRestTuningGetStatsRequest.h>
#import <CSRmeshRestClient/CSRRestTuningSetConfigRequest.h>
#import <CSRmeshRestClient/CSRRestTuningStats.h>
#import <CSRmeshRestClient/CSRRestTuningStatsResponse.h>
#import <CSRmeshRestClient/CSRRestUpdateSiteInfoRequest.h>
#import <CSRmeshRestClient/CSRRestUpdateTenantInfoRequest.h>
#import <CSRmeshRestClient/CSRRestWatchdogInterval.h>
#import <CSRmeshRestClient/CSRRestWatchdogIntervalResponse.h>
#import <CSRmeshRestClient/CSRRestWatchdogMessage.h>
#import <CSRmeshRestClient/CSRRestWatchdogMessageRequest.h>
#import <CSRmeshRestClient/CSRRestWatchdogMessageResponse.h>
#import <CSRmeshRestClient/CSRRestWatchdogSetIntervalRequest.h>
#import <CSRmeshRestClient/CSRRestAuthenticateGatewayRequest.h>
#import <CSRmeshRestClient/CSRRestAuthenticateGatewayResponse.h>
#import <CSRmeshRestClient/CSRRestAuthSeedResponse.h>
#import <CSRmeshRestClient/CSRRestBaseObject_Private.h>
#import <CSRmeshRestClient/CSRRestExchangeSecretRequest.h>
#import <CSRmeshRestClient/CSRRestExchangeSecretResponse.h>
#import <CSRmeshRestClient/CSRRestFileLogger.h>

